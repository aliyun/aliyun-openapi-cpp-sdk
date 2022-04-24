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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRELATIONLISTREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRELATIONLISTREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryRelationListRequest : public RpcServiceRequest {
public:
	QueryRelationListRequest();
	~QueryRelationListRequest();
	std::vector<std::string> getStatusList() const;
	void setStatusList(const std::vector<std::string> &statusList);
	int getPageNum() const;
	void setPageNum(int pageNum);
	long getUserId() const;
	void setUserId(long userId);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::vector<std::string> statusList_;
	int pageNum_;
	long userId_;
	int pageSize_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRELATIONLISTREQUEST_H_
