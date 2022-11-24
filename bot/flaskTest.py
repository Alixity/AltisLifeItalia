import flask
from flask import request, jsonify
import dbLifeFnc as life

app = flask.Flask(__name__)
app.config["DEBUG"] = True

@app.route('/api/player', methods=['GET'])
def api_sid():
    if 'sid' in request.args:
        sid = (request.args['sid'])
    else:
        return "Error: No id field provided. Please specify an sid."

    response = app.response_class(response=life.apiGetPlayerBySID(sid),
                                  status=200,
                                  mimetype='application/json')
    return response

@app.route('/api/allPlayers', methods=['GET'])
def api_all():
    response = app.response_class(response=life.apiGetAllPlayers(),
                                  status=200,
                                  mimetype='application/json')
    return response

app.run()