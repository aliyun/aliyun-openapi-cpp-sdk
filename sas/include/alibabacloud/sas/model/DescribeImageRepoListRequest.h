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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEREPOLISTREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEREPOLISTREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT DescribeImageRepoListRequest : public RpcServiceRequest {
public:
	DescribeImageRepoListRequest();
	~DescribeImageRepoListRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getRepoNamespace() const;
	void setRepoNamespace(const std::string &repoNamespace);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::string getFieldValue() const;
	void setFieldValue(const std::string &fieldValue);
	std::string getFieldName() const;
	void setFieldName(const std::string &fieldName);
	std::string getRepoName() const;
	void setRepoName(const std::string &repoName);
	std::string getOperateType() const;
	void setOperateType(const std::string &operateType);

private:
	std::string targetType_;
	std::string type_;
	std::string repoNamespace_;
	std::string sourceIp_;
	int pageSize_;
	int currentPage_;
	std::string fieldValue_;
	std::string fieldName_;
	std::string repoName_;
	std::string operateType_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEREPOLISTREQUEST_H_
