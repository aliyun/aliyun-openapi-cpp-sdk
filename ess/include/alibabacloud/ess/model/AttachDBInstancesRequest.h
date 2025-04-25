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

#ifndef ALIBABACLOUD_ESS_MODEL_ATTACHDBINSTANCESREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_ATTACHDBINSTANCESREQUEST_H_

#include <alibabacloud/ess/EssExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ess {
namespace Model {
class ALIBABACLOUD_ESS_EXPORT AttachDBInstancesRequest : public RpcServiceRequest {
public:
	AttachDBInstancesRequest();
	~AttachDBInstancesRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getScalingGroupId() const;
	void setScalingGroupId(const std::string &scalingGroupId);
	bool getForceAttach() const;
	void setForceAttach(bool forceAttach);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAttachMode() const;
	void setAttachMode(const std::string &attachMode);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::vector<std::string> getDBInstance() const;
	void setDBInstance(const std::vector<std::string> &dBInstance);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string clientToken_;
	std::string scalingGroupId_;
	bool forceAttach_;
	std::string type_;
	std::string accessKeyId_;
	std::string regionId_;
	std::string attachMode_;
	std::string resourceOwnerAccount_;
	std::vector<std::string> dBInstance_;
	long ownerId_;
};
} // namespace Model
} // namespace Ess
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ESS_MODEL_ATTACHDBINSTANCESREQUEST_H_
