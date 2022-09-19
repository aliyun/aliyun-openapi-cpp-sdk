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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeAffectedMaliciousFileImagesRequest : public RpcServiceRequest {
public:
	DescribeAffectedMaliciousFileImagesRequest();
	~DescribeAffectedMaliciousFileImagesRequest();
	std::string getRepoId() const;
	void setRepoId(const std::string &repoId);
	std::string getPod() const;
	void setPod(const std::string &pod);
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	std::string getRepoNamespace() const;
	void setRepoNamespace(const std::string &repoNamespace);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getImageDigest() const;
	void setImageDigest(const std::string &imageDigest);
	std::vector<std::string> getScanRange() const;
	void setScanRange(const std::vector<std::string> &scanRange);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getImageTag() const;
	void setImageTag(const std::string &imageTag);
	std::string getImage() const;
	void setImage(const std::string &image);
	std::string getMaliciousMd5() const;
	void setMaliciousMd5(const std::string &maliciousMd5);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getRepoName() const;
	void setRepoName(const std::string &repoName);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getRepoInstanceId() const;
	void setRepoInstanceId(const std::string &repoInstanceId);
	std::string getImageLayer() const;
	void setImageLayer(const std::string &imageLayer);
	std::string getContainerId() const;
	void setContainerId(const std::string &containerId);
	std::string getLevels() const;
	void setLevels(const std::string &levels);
	std::string getRepoRegionId() const;
	void setRepoRegionId(const std::string &repoRegionId);
	std::vector<std::string> getUuids() const;
	void setUuids(const std::vector<std::string> &uuids);

private:
	std::string repoId_;
	std::string pod_;
	std::string clusterName_;
	std::string repoNamespace_;
	std::string sourceIp_;
	std::string imageDigest_;
	std::vector<std::string> scanRange_;
	std::string pageSize_;
	std::string lang_;
	std::string imageTag_;
	std::string image_;
	std::string maliciousMd5_;
	int currentPage_;
	std::string clusterId_;
	std::string repoName_;
	std::string _namespace_;
	std::string repoInstanceId_;
	std::string imageLayer_;
	std::string containerId_;
	std::string levels_;
	std::string repoRegionId_;
	std::vector<std::string> uuids_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESREQUEST_H_
