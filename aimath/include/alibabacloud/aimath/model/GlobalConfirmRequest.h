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

#ifndef ALIBABACLOUD_AIMATH_MODEL_GLOBALCONFIRMREQUEST_H_
#define ALIBABACLOUD_AIMATH_MODEL_GLOBALCONFIRMREQUEST_H_

#include <alibabacloud/aimath/AIMathExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIMath {
namespace Model {
class ALIBABACLOUD_AIMATH_EXPORT GlobalConfirmRequest : public RpcServiceRequest {
public:
	GlobalConfirmRequest();
	~GlobalConfirmRequest();
	std::string getTag() const;
	void setTag(const std::string &tag);
	std::string getExerciseCode() const;
	void setExerciseCode(const std::string &exerciseCode);

private:
	std::string tag_;
	std::string exerciseCode_;
};
} // namespace Model
} // namespace AIMath
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIMATH_MODEL_GLOBALCONFIRMREQUEST_H_
