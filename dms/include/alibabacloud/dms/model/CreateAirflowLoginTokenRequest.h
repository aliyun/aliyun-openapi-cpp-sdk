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

#ifndef ALIBABACLOUD_DMS_MODEL_CREATEAIRFLOWLOGINTOKENREQUEST_H_
#define ALIBABACLOUD_DMS_MODEL_CREATEAIRFLOWLOGINTOKENREQUEST_H_

#include <alibabacloud/dms/DmsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms {
namespace Model {
class ALIBABACLOUD_DMS_EXPORT CreateAirflowLoginTokenRequest : public RpcServiceRequest {
public:
	CreateAirflowLoginTokenRequest();
	~CreateAirflowLoginTokenRequest();
	std::string getAirflowId() const;
	void setAirflowId(const std::string &airflowId);

private:
	std::string airflowId_;
};
} // namespace Model
} // namespace Dms
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_MODEL_CREATEAIRFLOWLOGINTOKENREQUEST_H_
