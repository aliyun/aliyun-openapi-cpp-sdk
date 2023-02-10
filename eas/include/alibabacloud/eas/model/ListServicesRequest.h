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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTSERVICESREQUEST_H_
#define ALIBABACLOUD_EAS_MODEL_LISTSERVICESREQUEST_H_

#include <alibabacloud/eas/EasExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eas {
namespace Model {
class ALIBABACLOUD_EAS_EXPORT ListServicesRequest : public RoaServiceRequest {
public:
	ListServicesRequest();
	~ListServicesRequest();
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getServiceType() const;
	void setServiceType(const std::string &serviceType);
	std::string getParentServiceUid() const;
	void setParentServiceUid(const std::string &parentServiceUid);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSort() const;
	void setSort(const std::string &sort);
	std::string getLabel() const;
	void setLabel(const std::string &label);
	std::string getGroupName() const;
	void setGroupName(const std::string &groupName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getOrder() const;
	void setOrder(const std::string &order);

private:
	std::string filter_;
	std::string serviceType_;
	std::string parentServiceUid_;
	int pageSize_;
	std::string sort_;
	std::string label_;
	std::string groupName_;
	int pageNumber_;
	std::string order_;
};
} // namespace Model
} // namespace Eas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAS_MODEL_LISTSERVICESREQUEST_H_
