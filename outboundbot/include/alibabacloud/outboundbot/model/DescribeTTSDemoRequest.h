/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBETTSDEMOREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBETTSDEMOREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT DescribeTTSDemoRequest : public RpcServiceRequest {
public:
	DescribeTTSDemoRequest();
	~DescribeTTSDemoRequest();
	std::string getVoice() const;
	void setVoice(const std::string &voice);
	std::string getSecretKey() const;
	void setSecretKey(const std::string &secretKey);
	std::string getScriptId() const;
	void setScriptId(const std::string &scriptId);
	std::string getAccessKey() const;
	void setAccessKey(const std::string &accessKey);
	std::string getEngine() const;
	void setEngine(const std::string &engine);
	std::string getText() const;
	void setText(const std::string &text);
	int getPitchRate() const;
	void setPitchRate(int pitchRate);
	std::string getAliCustomizedVoice() const;
	void setAliCustomizedVoice(const std::string &aliCustomizedVoice);
	std::string getNlsServiceType() const;
	void setNlsServiceType(const std::string &nlsServiceType);
	int getVolume() const;
	void setVolume(int volume);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getAppKey() const;
	void setAppKey(const std::string &appKey);
	int getSpeechRate() const;
	void setSpeechRate(int speechRate);

private:
	std::string voice_;
	std::string secretKey_;
	std::string scriptId_;
	std::string accessKey_;
	std::string engine_;
	std::string text_;
	int pitchRate_;
	std::string aliCustomizedVoice_;
	std::string nlsServiceType_;
	int volume_;
	std::string instanceId_;
	std::string appKey_;
	int speechRate_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_DESCRIBETTSDEMOREQUEST_H_
