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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT DescribeLaunchTemplateVersionsRequest : public RpcServiceRequest {
public:
	DescribeLaunchTemplateVersionsRequest();
	~DescribeLaunchTemplateVersionsRequest();
	std::string getLaunchTemplateName() const;
	void setLaunchTemplateName(const std::string &launchTemplateName);
	long getMaxVersion() const;
	void setMaxVersion(long maxVersion);
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getDefaultVersion() const;
	void setDefaultVersion(bool defaultVersion);
	long getMinVersion() const;
	void setMinVersion(long minVersion);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLaunchTemplateId() const;
	void setLaunchTemplateId(const std::string &launchTemplateId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::vector<long> getLaunchTemplateVersion() const;
	void setLaunchTemplateVersion(const std::vector<long> &launchTemplateVersion);
	bool getDetailFlag() const;
	void setDetailFlag(bool detailFlag);

private:
	std::string launchTemplateName_;
	long maxVersion_;
	long resourceOwnerId_;
	bool defaultVersion_;
	long minVersion_;
	int pageNumber_;
	std::string regionId_;
	int pageSize_;
	std::string launchTemplateId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::vector<long> launchTemplateVersion_;
	bool detailFlag_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_H_
