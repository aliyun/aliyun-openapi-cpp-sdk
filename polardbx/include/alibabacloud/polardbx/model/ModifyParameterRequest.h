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

#ifndef ALIBABACLOUD_POLARDBX_MODEL_MODIFYPARAMETERREQUEST_H_
#define ALIBABACLOUD_POLARDBX_MODEL_MODIFYPARAMETERREQUEST_H_

#include <alibabacloud/polardbx/PolardbxExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardbx {
namespace Model {
class ALIBABACLOUD_POLARDBX_EXPORT ModifyParameterRequest : public RpcServiceRequest {
public:
	ModifyParameterRequest();
	~ModifyParameterRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);
	std::string getParamLevel() const;
	void setParamLevel(const std::string &paramLevel);
	std::string getParameters() const;
	void setParameters(const std::string &parameters);

private:
	std::string clientToken_;
	std::string regionId_;
	std::string dBInstanceId_;
	std::string paramLevel_;
	std::string parameters_;
};
} // namespace Model
} // namespace Polardbx
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDBX_MODEL_MODIFYPARAMETERREQUEST_H_
