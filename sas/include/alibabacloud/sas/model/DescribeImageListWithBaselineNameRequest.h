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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTWITHBASELINENAMEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTWITHBASELINENAMEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageListWithBaselineNameRequest : public RpcServiceRequest {
public:
	DescribeImageListWithBaselineNameRequest();
	~DescribeImageListWithBaselineNameRequest();
	std::string getPod() const;
	void setPod(const std::string &pod);
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	std::string getCriteria() const;
	void setCriteria(const std::string &criteria);
	std::string getRepoNamespace() const;
	void setRepoNamespace(const std::string &repoNamespace);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getImageDigest() const;
	void setImageDigest(const std::string &imageDigest);
	std::vector<std::string> getScanRange() const;
	void setScanRange(const std::vector<std::string> &scanRange);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getCriteriaType() const;
	void setCriteriaType(const std::string &criteriaType);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getImage() const;
	void setImage(const std::string &image);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getRepoName() const;
	void setRepoName(const std::string &repoName);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	std::string getBaselineNameKey() const;
	void setBaselineNameKey(const std::string &baselineNameKey);
	std::string getRepoInstanceId() const;
	void setRepoInstanceId(const std::string &repoInstanceId);
	std::string getContainerId() const;
	void setContainerId(const std::string &containerId);

private:
	std::string pod_;
	std::string clusterName_;
	std::string criteria_;
	std::string repoNamespace_;
	std::string sourceIp_;
	std::string imageDigest_;
	std::vector<std::string> scanRange_;
	int pageSize_;
	std::string criteriaType_;
	std::string lang_;
	std::string image_;
	int currentPage_;
	std::string clusterId_;
	std::string repoName_;
	std::string _namespace_;
	std::string baselineNameKey_;
	std::string repoInstanceId_;
	std::string containerId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTWITHBASELINENAMEREQUEST_H_
