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

#ifndef ALIBABACLOUD_ES_SERVERLESS_MODEL_GETREGIONINFOREQUEST_H_
#define ALIBABACLOUD_ES_SERVERLESS_MODEL_GETREGIONINFOREQUEST_H_

#include <alibabacloud/es-serverless/Es_serverlessExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Es_serverless {
namespace Model {
class ALIBABACLOUD_ES_SERVERLESS_EXPORT GetRegionInfoRequest : public RoaServiceRequest {
public:
	GetRegionInfoRequest();
	~GetRegionInfoRequest();

private:
};
} // namespace Model
} // namespace Es_serverless
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ES_SERVERLESS_MODEL_GETREGIONINFOREQUEST_H_
