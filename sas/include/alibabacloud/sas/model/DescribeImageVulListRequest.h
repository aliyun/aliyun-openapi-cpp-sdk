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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEVULLISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEVULLISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageVulListRequest : public RpcServiceRequest {
public:
	DescribeImageVulListRequest();
	~DescribeImageVulListRequest();
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	std::string getType() const;
	void setType(const std::string &type);
	long getCreateTsStart() const;
	void setCreateTsStart(long createTsStart);
	std::string getContainerFieldName() const;
	void setContainerFieldName(const std::string &containerFieldName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getTag() const;
	void setTag(const std::string &tag);
	long getModifyTsEnd() const;
	void setModifyTsEnd(long modifyTsEnd);
	std::string getImage() const;
	void setImage(const std::string &image);
	std::string getLevel() const;
	void setLevel(const std::string &level);
	std::string getResource() const;
	void setResource(const std::string &resource);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getAliasName() const;
	void setAliasName(const std::string &aliasName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getIds() const;
	void setIds(const std::string &ids);
	long getCreateTsEnd() const;
	void setCreateTsEnd(long createTsEnd);
	std::string getContainerId() const;
	void setContainerId(const std::string &containerId);
	std::string getNecessity() const;
	void setNecessity(const std::string &necessity);
	std::string getUuids() const;
	void setUuids(const std::string &uuids);
	std::string getRepoId() const;
	void setRepoId(const std::string &repoId);
	std::string getStatusList() const;
	void setStatusList(const std::string &statusList);
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getPod() const;
	void setPod(const std::string &pod);
	std::string getCveId() const;
	void setCveId(const std::string &cveId);
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getRepoNamespace() const;
	void setRepoNamespace(const std::string &repoNamespace);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getContainerFieldValue() const;
	void setContainerFieldValue(const std::string &containerFieldValue);
	std::vector<std::string> getScanRange() const;
	void setScanRange(const std::vector<std::string> &scanRange);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getDigest() const;
	void setDigest(const std::string &digest);
	long getModifyTsStart() const;
	void setModifyTsStart(long modifyTsStart);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getDealed() const;
	void setDealed(const std::string &dealed);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getBatchName() const;
	void setBatchName(const std::string &batchName);
	std::string getRepoName() const;
	void setRepoName(const std::string &repoName);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getRepoInstanceId() const;
	void setRepoInstanceId(const std::string &repoInstanceId);
	std::string getRepoRegionId() const;
	void setRepoRegionId(const std::string &repoRegionId);

private:
	std::string clusterName_;
	std::string type_;
	long createTsStart_;
	std::string containerFieldName_;
	std::string sourceIp_;
	std::string tag_;
	long modifyTsEnd_;
	std::string image_;
	std::string level_;
	std::string resource_;
	std::string groupId_;
	std::string aliasName_;
	std::string instanceId_;
	std::string name_;
	std::string ids_;
	long createTsEnd_;
	std::string containerId_;
	std::string necessity_;
	std::string uuids_;
	std::string repoId_;
	std::string statusList_;
	std::string targetType_;
	std::string pod_;
	std::string cveId_;
	std::string remark_;
	std::string repoNamespace_;
	std::string regionId_;
	std::string containerFieldValue_;
	std::vector<std::string> scanRange_;
	int pageSize_;
	std::string digest_;
	long modifyTsStart_;
	std::string lang_;
	std::string dealed_;
	int currentPage_;
	std::string clusterId_;
	std::string batchName_;
	std::string repoName_;
	std::string _namespace_;
	std::string repoInstanceId_;
	std::string repoRegionId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEVULLISTREQUEST_H_
