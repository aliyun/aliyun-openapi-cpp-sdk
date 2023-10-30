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

#ifndef ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEMESSAGEGROUPREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEMESSAGEGROUPREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT ModifyLiveMessageGroupRequest : public RpcServiceRequest {
public:
	ModifyLiveMessageGroupRequest();
	~ModifyLiveMessageGroupRequest();
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getGroupInfo() const;
	void setGroupInfo(const std::string &groupInfo);
	std::string getDataCenter() const;
	void setDataCenter(const std::string &dataCenter);
	bool getModifyInfo() const;
	void setModifyInfo(bool modifyInfo);
	std::vector<std::string> getAdminList() const;
	void setAdminList(const std::vector<std::string> &adminList);
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	bool getModifyAdmin() const;
	void setModifyAdmin(bool modifyAdmin);

private:
	std::string groupId_;
	std::string groupInfo_;
	std::string dataCenter_;
	bool modifyInfo_;
	std::vector<std::string> adminList_;
	std::string appId_;
	bool modifyAdmin_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_MODIFYLIVEMESSAGEGROUPREQUEST_H_
