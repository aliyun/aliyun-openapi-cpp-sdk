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

#ifndef ALIBABACLOUD_FT_MODEL_DATARATELIMITTESTREQUEST_H_
#define ALIBABACLOUD_FT_MODEL_DATARATELIMITTESTREQUEST_H_

#include <alibabacloud/ft/FtExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ft {
namespace Model {
class ALIBABACLOUD_FT_EXPORT DataRateLimitTestRequest : public RpcServiceRequest {
public:
	DataRateLimitTestRequest();
	~DataRateLimitTestRequest();
	std::string getNewparam2() const;
	void setNewparam2(const std::string &newparam2);
	std::string getNewparam1() const;
	void setNewparam1(const std::string &newparam1);
	std::string getData() const;
	void setData(const std::string &data);
	std::string getMap() const;
	void setMap(const std::string &map);

private:
	std::string newparam2_;
	std::string newparam1_;
	std::string data_;
	std::string map_;
};
} // namespace Model
} // namespace Ft
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_FT_MODEL_DATARATELIMITTESTREQUEST_H_
