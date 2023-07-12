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

#ifndef ALIBABACLOUD_EAIS_MODEL_DETACHEAISEIREQUEST_H_
#define ALIBABACLOUD_EAIS_MODEL_DETACHEAISEIREQUEST_H_

#include <alibabacloud/eais/EaisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eais {
namespace Model {
class ALIBABACLOUD_EAIS_EXPORT DetachEaisEiRequest : public RpcServiceRequest {
public:
	DetachEaisEiRequest();
	~DetachEaisEiRequest();
	std::string getEiInstanceId() const;
	void setEiInstanceId(const std::string &eiInstanceId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string eiInstanceId_;
	std::string regionId_;
};
} // namespace Model
} // namespace Eais
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EAIS_MODEL_DETACHEAISEIREQUEST_H_
