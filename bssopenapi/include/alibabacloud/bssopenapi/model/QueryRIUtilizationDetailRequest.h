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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRIUTILIZATIONDETAILREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRIUTILIZATIONDETAILREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryRIUtilizationDetailRequest : public RpcServiceRequest {
public:
	QueryRIUtilizationDetailRequest();
	~QueryRIUtilizationDetailRequest();
	std::string getDeductedInstanceId() const;
	void setDeductedInstanceId(const std::string &deductedInstanceId);
	std::string getInstanceSpec() const;
	void setInstanceSpec(const std::string &instanceSpec);
	std::string getEndTime() const;
	void setEndTime(const std::string &endTime);
	std::string getRIInstanceId() const;
	void setRIInstanceId(const std::string &rIInstanceId);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getRICommodityCode() const;
	void setRICommodityCode(const std::string &rICommodityCode);

private:
	std::string deductedInstanceId_;
	std::string instanceSpec_;
	std::string endTime_;
	std::string rIInstanceId_;
	std::string startTime_;
	int pageNum_;
	int pageSize_;
	std::string rICommodityCode_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYRIUTILIZATIONDETAILREQUEST_H_
