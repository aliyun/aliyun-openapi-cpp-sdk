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

#ifndef ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEMESSAGEGROUPBANDREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEMESSAGEGROUPBANDREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ModifyLiveMessageGroupBandRequest : public RpcServiceRequest {
public:
	ModifyLiveMessageGroupBandRequest();
	~ModifyLiveMessageGroupBandRequest();
	bool getBannedAll() const;
	void setBannedAll(bool bannedAll);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::vector<std::string> getExceptUsers() const;
	void setExceptUsers(const std::vector<std::string> &exceptUsers);
	std::string getDataCenter() const;
	void setDataCenter(const std::string &dataCenter);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::vector<std::string> getBannnedUsers() const;
	void setBannnedUsers(const std::vector<std::string> &bannnedUsers);

private:
	bool bannedAll_;
	std::string groupId_;
	std::vector<std::string> exceptUsers_;
	std::string dataCenter_;
	std::string appId_;
	std::vector<std::string> bannnedUsers_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEMESSAGEGROUPBANDREQUEST_H_
