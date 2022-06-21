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

#ifndef ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETESTREQUEST_H_
#define ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETESTREQUEST_H_

#include <alibabacloud/amptest/AmpTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AmpTest {
namespace Model {
class ALIBABACLOUD_AMPTEST_EXPORT HuichengetestRequest : public RpcServiceRequest {
public:
	HuichengetestRequest();
	~HuichengetestRequest();

private:
};
} // namespace Model
} // namespace AmpTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETESTREQUEST_H_
