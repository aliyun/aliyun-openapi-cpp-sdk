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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTUNASSIGNEDNUMBERSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTUNASSIGNEDNUMBERSREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListUnassignedNumbersRequest : public RpcServiceRequest {
public:
	ListUnassignedNumbersRequest();
	~ListUnassignedNumbersRequest();
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSearchPattern() const;
	void setSearchPattern(const std::string &searchPattern);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	int pageNumber_;
	std::string searchPattern_;
	int pageSize_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTUNASSIGNEDNUMBERSREQUEST_H_
