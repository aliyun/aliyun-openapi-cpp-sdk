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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTBYSENSITIVEFILEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTBYSENSITIVEFILEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageListBySensitiveFileRequest : public RpcServiceRequest {
public:
	DescribeImageListBySensitiveFileRequest();
	~DescribeImageListBySensitiveFileRequest();
	std::string getSensitiveFileKey() const;
	void setSensitiveFileKey(const std::string &sensitiveFileKey);
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
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getRiskLevel() const;
	void setRiskLevel(const std::string &riskLevel);
	std::string getRepoName() const;
	void setRepoName(const std::string &repoName);
	std::string getRepoInstanceId() const;
	void setRepoInstanceId(const std::string &repoInstanceId);

private:
	std::string sensitiveFileKey_;
	std::string repoNamespace_;
	std::string imageDigest_;
	std::vector<std::string> scanRange_;
	int pageSize_;
	std::string lang_;
	int currentPage_;
	std::string riskLevel_;
	std::string repoName_;
	std::string repoInstanceId_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTBYSENSITIVEFILEREQUEST_H_
