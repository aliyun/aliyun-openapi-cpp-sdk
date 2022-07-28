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
	string getFilter() const;
	void setFilter(string filter);
	integer getPageSize() const;
	void setPageSize(integer pageSize);
	string getSort() const;
	void setSort(string sort);
	integer getPageNumber() const;
	void setPageNumber(integer pageNumber);
	string getOrder() const;
	void setOrder(string order);

private:
	string filter_;
	integer pageSize_;
	string sort_;
	integer pageNumber_;
	string order_;
};
} // namespace Model
} // namespace Eas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAS_MODEL_LISTSERVICESREQUEST_H_
