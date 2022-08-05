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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_ANDBACKREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_ANDBACKREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT AndBackRequest : public RpcServiceRequest {
public:
	AndBackRequest();
	~AndBackRequest();
	std::string getClientToken2() const;
	void setClientToken2(const std::string &clientToken2);
	std::string getTestDemo() const;
	void setTestDemo(const std::string &testDemo);

private:
	std::string clientToken2_;
	std::string testDemo_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_ANDBACKREQUEST_H_
