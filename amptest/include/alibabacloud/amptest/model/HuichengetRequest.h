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

#ifndef ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETREQUEST_H_
#define ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETREQUEST_H_

#include <alibabacloud/amptest/AmpTestExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AmpTest {
namespace Model {
class ALIBABACLOUD_AMPTEST_EXPORT HuichengetRequest : public RpcServiceRequest {
public:
	HuichengetRequest();
	~HuichengetRequest();
	std::string getAdd() const;
	void setAdd(const std::string &add);
	std::string getAddress() const;
	void setAddress(const std::string &address);
	std::string getSix() const;
	void setSix(const std::string &six);
	std::string getEnight() const;
	void setEnight(const std::string &enight);
	std::string getNewName() const;
	void setNewName(const std::string &newName);
	std::string getList() const;
	void setList(const std::string &list);
	std::string getTwo() const;
	void setTwo(const std::string &two);
	std::string getThree() const;
	void setThree(const std::string &three);
	std::string getNigh() const;
	void setNigh(const std::string &nigh);
	std::string getRed() const;
	void setRed(const std::string &red);
	std::string getApple() const;
	void setApple(const std::string &apple);
	std::string getTea() const;
	void setTea(const std::string &tea);
	std::string getBlue() const;
	void setBlue(const std::string &blue);
	std::string getWhite() const;
	void setWhite(const std::string &white);
	std::string getFour() const;
	void setFour(const std::string &four);
	std::string getNow() const;
	void setNow(const std::string &now);
	std::string getTen() const;
	void setTen(const std::string &ten);
	std::string getFive() const;
	void setFive(const std::string &five);

private:
	std::string add_;
	std::string address_;
	std::string six_;
	std::string enight_;
	std::string newName_;
	std::string list_;
	std::string two_;
	std::string three_;
	std::string nigh_;
	std::string red_;
	std::string apple_;
	std::string tea_;
	std::string blue_;
	std::string white_;
	std::string four_;
	std::string now_;
	std::string ten_;
	std::string five_;
};
} // namespace Model
} // namespace AmpTest
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AMPTEST_MODEL_HUICHENGETREQUEST_H_
