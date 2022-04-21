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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_RECORDFAILUREREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_RECORDFAILUREREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT RecordFailureRequest : public RpcServiceRequest {
public:
	RecordFailureRequest();
	~RecordFailureRequest();
	std::string getCallId() const;
	void setCallId(const std::string &callId);
	long getActualTime() const;
	void setActualTime(long actualTime);
	std::string getCallingNumber() const;
	void setCallingNumber(const std::string &callingNumber);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getDispositionCode() const;
	void setDispositionCode(const std::string &dispositionCode);
	std::string getCalledNumber() const;
	void setCalledNumber(const std::string &calledNumber);
	std::string getInstanceOwnerId() const;
	void setInstanceOwnerId(const std::string &instanceOwnerId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getExceptionCodes() const;
	void setExceptionCodes(const std::string &exceptionCodes);

private:
	std::string callId_;
	long actualTime_;
	std::string callingNumber_;
	std::string instanceId_;
	std::string dispositionCode_;
	std::string calledNumber_;
	std::string instanceOwnerId_;
	std::string taskId_;
	std::string exceptionCodes_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_RECORDFAILUREREQUEST_H_
