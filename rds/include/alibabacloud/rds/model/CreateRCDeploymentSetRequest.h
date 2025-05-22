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

#ifndef ALIBABACLOUD_RDS_MODEL_CREATERCDEPLOYMENTSETREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_CREATERCDEPLOYMENTSETREQUEST_H_

#include <alibabacloud/rds/RdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Rds {
namespace Model {
class ALIBABACLOUD_RDS_EXPORT CreateRCDeploymentSetRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateRCDeploymentSetRequest();
	~CreateRCDeploymentSetRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getGroupCount() const;
	void setGroupCount(long groupCount);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getDeploymentSetName() const;
	void setDeploymentSetName(const std::string &deploymentSetName);
	std::string getOnUnableToRedeployFailedInstance() const;
	void setOnUnableToRedeployFailedInstance(const std::string &onUnableToRedeployFailedInstance);
	std::string getStrategy() const;
	void setStrategy(const std::string &strategy);

private:
	std::string clientToken_;
	std::string description_;
	std::string regionId_;
	long groupCount_;
	std::vector<Tag> tag_;
	std::string deploymentSetName_;
	std::string onUnableToRedeployFailedInstance_;
	std::string strategy_;
};
} // namespace Model
} // namespace Rds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_RDS_MODEL_CREATERCDEPLOYMENTSETREQUEST_H_
