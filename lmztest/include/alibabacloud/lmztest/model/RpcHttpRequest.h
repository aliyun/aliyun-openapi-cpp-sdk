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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_RPCHTTPREQUEST_H_
#define ALIBABACLOUD_LMZTEST_MODEL_RPCHTTPREQUEST_H_

#include <alibabacloud/lmztest/LmzTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace LmzTest {
namespace Model {
class ALIBABACLOUD_LMZTEST_EXPORT RpcHttpRequest : public RpcServiceRequest {
public:
	RpcHttpRequest();
	~RpcHttpRequest();
	std::string getNews() const;
	void setNews(const std::string &news);
	std::string getCodes() const;
	void setCodes(const std::string &codes);
	std::string getNumber() const;
	void setNumber(const std::string &number);
	std::string getMonkey() const;
	void setMonkey(const std::string &monkey);
	std::string getWorld() const;
	void setWorld(const std::string &world);
	std::string getParam() const;
	void setParam(const std::string &param);
	std::string getOld() const;
	void setOld(const std::string &old);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getId() const;
	void setId(const std::string &id);
	std::string getNone() const;
	void setNone(const std::string &none);

private:
	std::string news_;
	std::string codes_;
	std::string number_;
	std::string monkey_;
	std::string world_;
	std::string param_;
	std::string old_;
	std::string name_;
	std::string id_;
	std::string none_;
};
} // namespace Model
} // namespace LmzTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LMZTEST_MODEL_RPCHTTPREQUEST_H_
