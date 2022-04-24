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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESAVINGSPLANSCOVERAGETOTALREQUEST_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESAVINGSPLANSCOVERAGETOTALREQUEST_H_

#include <alibabacloud/bssopenapi/BssOpenApiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace BssOpenApi {
namespace Model {
class ALIBABACLOUD_BSSOPENAPI_EXPORT DescribeSavingsPlansCoverageTotalRequest : public RpcServiceRequest {
public:
	DescribeSavingsPlansCoverageTotalRequest();
	~DescribeSavingsPlansCoverageTotalRequest();
	std::string getPeriodType() const;
	void setPeriodType(const std::string &periodType);
	long getBillOwnerId() const;
	void setBillOwnerId(long billOwnerId);
	std::string getStartPeriod() const;
	void setStartPeriod(const std::string &startPeriod);
	std::string getEndPeriod() const;
	void setEndPeriod(const std::string &endPeriod);

private:
	std::string periodType_;
	long billOwnerId_;
	std::string startPeriod_;
	std::string endPeriod_;
};
} // namespace Model
} // namespace BssOpenApi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_DESCRIBESAVINGSPLANSCOVERAGETOTALREQUEST_H_
