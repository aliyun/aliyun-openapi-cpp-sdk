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

#ifndef ALIBABACLOUD_EAS_MODEL_LISTGROUPSREQUEST_H_
#define ALIBABACLOUD_EAS_MODEL_LISTGROUPSREQUEST_H_

#include <alibabacloud/eas/EasExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eas {
namespace Model {
class ALIBABACLOUD_EAS_EXPORT ListGroupsRequest : public RoaServiceRequest {
public:
	ListGroupsRequest();
	~ListGroupsRequest();
	std::string getFilter() const;
	void setFilter(const std::string &filter);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);

private:
	std::string filter_;
	std::string pageSize_;
	std::string pageNumber_;
};
} // namespace Model
} // namespace Eas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAS_MODEL_LISTGROUPSREQUEST_H_
