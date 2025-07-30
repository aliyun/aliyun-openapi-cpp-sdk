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

#ifndef ALIBABACLOUD_CIOMARKETPOP_MODEL_GETEVERYONESELLSFORMLISTREQUEST_H_
#define ALIBABACLOUD_CIOMARKETPOP_MODEL_GETEVERYONESELLSFORMLISTREQUEST_H_

#include <alibabacloud/ciomarketpop/CioMarketPopExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CioMarketPop {
namespace Model {
class ALIBABACLOUD_CIOMARKETPOP_EXPORT GetEveryOneSellsFormListRequest : public RpcServiceRequest {
public:
	GetEveryOneSellsFormListRequest();
	~GetEveryOneSellsFormListRequest();
	std::string getAuth() const;
	void setAuth(const std::string &auth);

private:
	std::string auth_;
};
} // namespace Model
} // namespace CioMarketPop
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CIOMARKETPOP_MODEL_GETEVERYONESELLSFORMLISTREQUEST_H_
