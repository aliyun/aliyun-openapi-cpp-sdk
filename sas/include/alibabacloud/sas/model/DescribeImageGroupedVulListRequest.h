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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEGROUPEDVULLISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEGROUPEDVULLISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageGroupedVulListRequest : public RpcServiceRequest {
public:
	DescribeImageGroupedVulListRequest();
	~DescribeImageGroupedVulListRequest();
	std::string getType() const;
	void setType(const std::string &type);
	long getLastTsEnd() const;
	void setLastTsEnd(long lastTsEnd);
	long getCreateTsStart() const;
	void setCreateTsStart(long createTsStart);
	int getIsLatest() const;
	void setIsLatest(int isLatest);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getImageTag() const;
	void setImageTag(const std::string &imageTag);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getAliasName() const;
	void setAliasName(const std::string &aliasName);
	long getPatchId() const;
	void setPatchId(long patchId);
	std::string getName() const;
	void setName(const std::string &name);
	long getCreateTsEnd() const;
	void setCreateTsEnd(long createTsEnd);
	std::string getNecessity() const;
	void setNecessity(const std::string &necessity);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);
	std::string getRepoId() const;
	void setRepoId(const std::string &repoId);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getCveId() const;
	void setCveId(const std::string &cveId);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getRepoNamespace() const;
	void setRepoNamespace(const std::string &repoNamespace);
	std::string getImageDigest() const;
	void setImageDigest(const std::string &imageDigest);
	std::vector<std::string> getScanRange() const;
	void setScanRange(const std::vector<std::string> &scanRange);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	long getLastTsStart() const;
	void setLastTsStart(long lastTsStart);
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
	std::string getRepoName() const;
	void setRepoName(const std::string &repoName);
	std::string getRepoInstanceId() const;
	void setRepoInstanceId(const std::string &repoInstanceId);
	std::string getImageLayer() const;
	void setImageLayer(const std::string &imageLayer);
	std::string getRepoRegionId() const;
	void setRepoRegionId(const std::string &repoRegionId);

private:
	std::string type_;
	long lastTsEnd_;
	long createTsStart_;
	int isLatest_;
	std::string sourceIp_;
	std::string imageTag_;
	std::string level_;
	std::string groupId_;
	std::string orderBy_;
	std::string aliasName_;
	long patchId_;
	std::string name_;
	long createTsEnd_;
	std::string necessity_;
	std::string uuids_;
	std::string repoId_;
	std::string statusList_;
	std::string cveId_;
	std::string remark_;
	std::string repoNamespace_;
	std::string imageDigest_;
	std::vector<std::string> scanRange_;
	int pageSize_;
	std::string lang_;
	long lastTsStart_;
	std::string direction_;
	std::string dealed_;
	int currentPage_;
	std::string clusterId_;
	std::string searchTags_;
	std::string repoName_;
	std::string repoInstanceId_;
	std::string imageLayer_;
	std::string repoRegionId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEGROUPEDVULLISTREQUEST_H_
