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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETSOURCEMAPINFOREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_GETSOURCEMAPINFOREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT GetSourceMapInfoRequest : public RpcServiceRequest {
public:
	GetSourceMapInfoRequest();
	~GetSourceMapInfoRequest();
	std::string getEdition() const;
	void setEdition(const std::string &edition);
	std::string getVersion() const;
	void setVersion(const std::string &version);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getID() const;
	void setID(const std::string &iD);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	bool getAscendingSequence() const;
	void setAscendingSequence(bool ascendingSequence);
	std::string getOrderField() const;
	void setOrderField(const std::string &orderField);

private:
	std::string edition_;
	std::string version_;
	std::string regionId_;
	std::string iD_;
	std::string keyword_;
	bool ascendingSequence_;
	std::string orderField_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_GETSOURCEMAPINFOREQUEST_H_
