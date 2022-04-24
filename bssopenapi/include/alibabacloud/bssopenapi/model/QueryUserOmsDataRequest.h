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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYUSEROMSDATAREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYUSEROMSDATAREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryUserOmsDataRequest : public RpcServiceRequest {
public:
	QueryUserOmsDataRequest();
	~QueryUserOmsDataRequest();
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getDataType() const;
	void setDataType(const std::string &dataType);
	std::string getMarker() const;
	void setMarker(const std::string &marker);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTable() const;
	void setTable(const std::string &table);

private:
	std::string endTime_;
	std::string startTime_;
	long ownerId_;
	std::string dataType_;
	std::string marker_;
	int pageSize_;
	std::string table_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYUSEROMSDATAREQUEST_H_
