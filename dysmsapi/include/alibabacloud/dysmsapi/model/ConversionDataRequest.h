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

#ifndef ALIBABACLOUD_DYSMSAPI_MODEL_CONVERSIONDATAREQUEST_H_
#define ALIBABACLOUD_DYSMSAPI_MODEL_CONVERSIONDATAREQUEST_H_

#include <alibabacloud/dysmsapi/DysmsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dysmsapi {
namespace Model {
class ALIBABACLOUD_DYSMSAPI_EXPORT ConversionDataRequest : public RpcServiceRequest {
public:
	ConversionDataRequest();
	~ConversionDataRequest();
	long getReportTime() const;
	void setReportTime(long reportTime);
	std::string getConversionRate() const;
	void setConversionRate(const std::string &conversionRate);

private:
	long reportTime_;
	std::string conversionRate_;
};
} // namespace Model
} // namespace Dysmsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYSMSAPI_MODEL_CONVERSIONDATAREQUEST_H_
