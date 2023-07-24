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

#ifndef ALIBABACLOUD_SASTI_MODEL_GETGRAPHQUERYTEMPLATESREQUEST_H_
#define ALIBABACLOUD_SASTI_MODEL_GETGRAPHQUERYTEMPLATESREQUEST_H_

#include <alibabacloud/sasti/SastiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sasti {
namespace Model {
class ALIBABACLOUD_SASTI_EXPORT GetGraphQueryTemplatesRequest : public RpcServiceRequest {
public:
	GetGraphQueryTemplatesRequest();
	~GetGraphQueryTemplatesRequest();
	std::string getServiceUnit() const;
	void setServiceUnit(const std::string &serviceUnit);
	std::string getEnv() const;
	void setEnv(const std::string &env);

private:
	std::string serviceUnit_;
	std::string env_;
};
} // namespace Model
} // namespace Sasti
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SASTI_MODEL_GETGRAPHQUERYTEMPLATESREQUEST_H_
