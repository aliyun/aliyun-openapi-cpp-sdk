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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_HELLOREQUEST_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_HELLOREQUEST_H_

#include <alibabacloud/qianzhou/QianzhouExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Qianzhou {
namespace Model {
class ALIBABACLOUD_QIANZHOU_EXPORT HelloRequest : public RoaServiceRequest {
public:
	HelloRequest();
	~HelloRequest();
	std::string getUser() const;
	void setUser(const std::string &user);

private:
	std::string user_;
};
} // namespace Model
} // namespace Qianzhou
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_HELLOREQUEST_H_
