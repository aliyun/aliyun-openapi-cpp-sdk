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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDVULREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDVULREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeGroupedVulRequest : public RpcServiceRequest {
public:
	DescribeGroupedVulRequest();
	~DescribeGroupedVulRequest();
	int getMinScore() const;
	void setMinScore(int minScore);
	std::string getAttachTypes() const;
	void setAttachTypes(const std::string &attachTypes);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getVpcInstanceIds() const;
	void setVpcInstanceIds(const std::string &vpcInstanceIds);
	long getLastTsEnd() const;
	void setLastTsEnd(long lastTsEnd);
	long getCreateTsStart() const;
	void setCreateTsStart(long createTsStart);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	long getPatchId() const;
	void setPatchId(long patchId);
	std::string getAliasName() const;
	void setAliasName(const std::string &aliasName);
	std::string getName() const;
	void setName(const std::string &name);
	long getCreateTsEnd() const;
	void setCreateTsEnd(long createTsEnd);
	std::string getNecessity() const;
	void setNecessity(const std::string &necessity);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getCveId() const;
	void setCveId(const std::string &cveId);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getLastTsStart() const;
	void setLastTsStart(long lastTsStart);
	std::string getAssetType() const;
	void setAssetType(const std::string &assetType);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getSearchTags() const;
	void setSearchTags(const std::string &searchTags);

private:
	int minScore_;
	std::string attachTypes_;
	std::string type_;
	std::string vpcInstanceIds_;
	long lastTsEnd_;
	long createTsStart_;
	std::string containerFieldName_;
	std::string sourceIp_;
	std::string level_;
	std::string groupId_;
	std::string orderBy_;
	long patchId_;
	std::string aliasName_;
	std::string name_;
	long createTsEnd_;
	std::string necessity_;
	std::string uuids_;
	std::string statusList_;
	std::string targetType_;
	std::string cveId_;
	std::string containerFieldValue_;
	int pageSize_;
	std::string lang_;
	long lastTsStart_;
	std::string assetType_;
	std::string direction_;
	std::string dealed_;
	int currentPage_;
	std::string clusterId_;
	std::string searchTags_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPEDVULREQUEST_H_
