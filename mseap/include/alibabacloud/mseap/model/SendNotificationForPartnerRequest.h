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

#ifndef ALIBABACLOUD_MSEAP_MODEL_SENDNOTIFICATIONFORPARTNERREQUEST_H_
#define ALIBABACLOUD_MSEAP_MODEL_SENDNOTIFICATIONFORPARTNERREQUEST_H_

#include <alibabacloud/mseap/MseapExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mseap {
namespace Model {
class ALIBABACLOUD_MSEAP_EXPORT SendNotificationForPartnerRequest : public RpcServiceRequest {
public:
	SendNotificationForPartnerRequest();
	~SendNotificationForPartnerRequest();
	std::string getTrackId() const;
	void setTrackId(const std::string &trackId);
	std::vector<std::string> getSmartSubChannels() const;
	void setSmartSubChannels(const std::vector<std::string> &smartSubChannels);
	std::string getChannelType() const;
	void setChannelType(const std::string &channelType);
	std::string getNotifyType() const;
	void setNotifyType(const std::string &notifyType);
	std::string getNotifycationEventType() const;
	void setNotifycationEventType(const std::string &notifycationEventType);
	std::string getSendTarget() const;
	void setSendTarget(const std::string &sendTarget);
	std::string getBizId() const;
	void setBizId(const std::string &bizId);
	std::map<std::string, std::string> getParamMap() const;
	void setParamMap(const std::map<std::string, std::string> &paramMap);

private:
	std::string trackId_;
	std::vector<std::string> smartSubChannels_;
	std::string channelType_;
	std::string notifyType_;
	std::string notifycationEventType_;
	std::string sendTarget_;
	std::string bizId_;
	std::map<std::string, std::string> paramMap_;
};
} // namespace Model
} // namespace Mseap
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSEAP_MODEL_SENDNOTIFICATIONFORPARTNERREQUEST_H_
