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

#ifndef ALIBABACLOUD_SAS_MODEL_PAGEIMAGEREGISTRYREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_PAGEIMAGEREGISTRYREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT PageImageRegistryRequest : public RpcServiceRequest {
public:
	PageImageRegistryRequest();
	~PageImageRegistryRequest();
	std::vector<std::string> getRegistryTypeNotInList() const;
	void setRegistryTypeNotInList(const std::vector<std::string> &registryTypeNotInList);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRegistryNameLike() const;
	void setRegistryNameLike(const std::string &registryNameLike);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	std::vector<std::string> getRegistryTypeInList() const;
	void setRegistryTypeInList(const std::vector<std::string> &registryTypeInList);

private:
	std::vector<std::string> registryTypeNotInList_;
	std::string sourceIp_;
	int pageSize_;
	std::string registryNameLike_;
	int currentPage_;
	std::vector<std::string> registryTypeInList_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_PAGEIMAGEREGISTRYREQUEST_H_
