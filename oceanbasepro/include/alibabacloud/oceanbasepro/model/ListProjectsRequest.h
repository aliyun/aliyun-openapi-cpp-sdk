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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTPROJECTSREQUEST_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTPROJECTSREQUEST_H_

#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OceanBasePro {
namespace Model {
class ALIBABACLOUD_OCEANBASEPRO_EXPORT ListProjectsRequest : public RpcServiceRequest {
public:
	ListProjectsRequest();
	~ListProjectsRequest();
	std::string getSearchKey() const;
	void setSearchKey(const std::string &searchKey);
	std::string getType() const;
	void setType(const std::string &type);
	bool getVisibleSubProject() const;
	void setVisibleSubProject(bool visibleSubProject);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::vector<std::string> getSinkEndpointTypes() const;
	void setSinkEndpointTypes(const std::vector<std::string> &sinkEndpointTypes);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getOrder() const;
	void setOrder(const std::string &order);
	std::vector<std::string> getSourceEndpointTypes() const;
	void setSourceEndpointTypes(const std::vector<std::string> &sourceEndpointTypes);
	std::string getSortField() const;
	void setSortField(const std::string &sortField);
	bool getNeedRelatedInfo() const;
	void setNeedRelatedInfo(bool needRelatedInfo);
	std::vector<std::string> getLabelIds() const;
	void setLabelIds(const std::vector<std::string> &labelIds);
	std::vector<std::string> getStatus() const;
	void setStatus(const std::vector<std::string> &status);

private:
	std::string searchKey_;
	std::string type_;
	bool visibleSubProject_;
	int pageNumber_;
	std::vector<std::string> sinkEndpointTypes_;
	int pageSize_;
	std::string order_;
	std::vector<std::string> sourceEndpointTypes_;
	std::string sortField_;
	bool needRelatedInfo_;
	std::vector<std::string> labelIds_;
	std::vector<std::string> status_;
};
} // namespace Model
} // namespace OceanBasePro
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_LISTPROJECTSREQUEST_H_
