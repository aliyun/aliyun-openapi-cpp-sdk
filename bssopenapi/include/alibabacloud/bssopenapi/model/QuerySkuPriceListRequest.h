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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSKUPRICELISTREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSKUPRICELISTREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT QuerySkuPriceListRequest : public RpcServiceRequest {
public:
	QuerySkuPriceListRequest();
	~QuerySkuPriceListRequest();
	std::string getNextPageToken() const;
	void setNextPageToken(const std::string &nextPageToken);
	std::string getCommodityCode() const;
	void setCommodityCode(const std::string &commodityCode);
	std::map<std::string, std::vector<std::string>> getPriceFactorConditionMap() const;
	void setPriceFactorConditionMap(const std::map<std::string, std::vector<std::string>> &priceFactorConditionMap);
	std::string getPriceEntityCode() const;
	void setPriceEntityCode(const std::string &priceEntityCode);
	int getPageSize() const;
	void setPageSize(int pageSize);

private:
	std::string nextPageToken_;
	std::string commodityCode_;
	std::map<std::string, std::vector<std::string>> priceFactorConditionMap_;
	std::string priceEntityCode_;
	int pageSize_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYSKUPRICELISTREQUEST_H_
