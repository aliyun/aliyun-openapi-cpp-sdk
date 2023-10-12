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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_SEARCHOMSOPENAPIPROJECTSREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_SEARCHOMSOPENAPIPROJECTSREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT SearchOmsOpenAPIProjectsRequest : public RpcServiceRequest {
public:
	SearchOmsOpenAPIProjectsRequest();
	~SearchOmsOpenAPIProjectsRequest();
	std::vector<std::string> getDestDbTypes() const;
	void setDestDbTypes(const std::vector<std::string> &destDbTypes);
	std::vector<std::string> getStatusList() const;
	void setStatusList(const std::vector<std::string> &statusList);
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::vector<std::string> getSourceDbTypes() const;
	void setSourceDbTypes(const std::vector<std::string> &sourceDbTypes);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getWorkerGradeId() const;
	void setWorkerGradeId(const std::string &workerGradeId);
	std::vector<std::string> getLabelIds() const;
	void setLabelIds(const std::vector<std::string> &labelIds);

private:
	std::vector<std::string> destDbTypes_;
	std::vector<std::string> statusList_;
	std::string searchKey_;
	int pageNumber_;
	std::vector<std::string> sourceDbTypes_;
	int pageSize_;
	std::string workerGradeId_;
	std::vector<std::string> labelIds_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_SEARCHOMSOPENAPIPROJECTSREQUEST_H_
