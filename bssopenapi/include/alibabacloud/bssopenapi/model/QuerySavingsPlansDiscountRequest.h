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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSAVINGSPLANSDISCOUNTREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSAVINGSPLANSDISCOUNTREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QuerySavingsPlansDiscountRequest : public RpcServiceRequest {
public:
	QuerySavingsPlansDiscountRequest();
	~QuerySavingsPlansDiscountRequest();
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	std::string getLocale() const;
	void setLocale(const std::string &locale);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getCycle() const;
	void setCycle(const std::string &cycle);
	std::string getSpec() const;
	void setSpec(const std::string &spec);
	std::string getModuleCode() const;
	void setModuleCode(const std::string &moduleCode);
	std::string getPayMode() const;
	void setPayMode(const std::string &payMode);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSpnType() const;
	void setSpnType(const std::string &spnType);
	std::string getRegion() const;
	void setRegion(const std::string &region);

private:
	std::string commodityCode_;
	std::string locale_;
	int pageNum_;
	std::string cycle_;
	std::string spec_;
	std::string moduleCode_;
	std::string payMode_;
	int pageSize_;
	std::string spnType_;
	std::string region_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSAVINGSPLANSDISCOUNTREQUEST_H_
