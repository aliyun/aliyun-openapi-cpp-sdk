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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGURATIONSYNCHRONIZATIONJOBREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGURATIONSYNCHRONIZATIONJOBREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT ConfigurationSynchronizationJobRequest : public RpcServiceRequest {
public:
	ConfigurationSynchronizationJobRequest();
	~ConfigurationSynchronizationJobRequest();
	std::string getSourceEndpointInstanceID() const;
	void setSourceEndpointInstanceID(const std::string &sourceEndpointInstanceID);
	std::string getDestinationEndpointInstanceID() const;
	void setDestinationEndpointInstanceID(const std::string &destinationEndpointInstanceID);
	bool getInitializationStructureLoad() const;
	void setInitializationStructureLoad(bool initializationStructureLoad);
	std::string getSynchronizationObject() const;
	void setSynchronizationObject(const std::string &synchronizationObject);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getSourceEndpointInstanceType() const;
	void setSourceEndpointInstanceType(const std::string &sourceEndpointInstanceType);
	std::string getSynchronizationJobId() const;
	void setSynchronizationJobId(const std::string &synchronizationJobId);
	std::string getSynchronizationJobName() const;
	void setSynchronizationJobName(const std::string &synchronizationJobName);
	bool getInitializationDataLoad() const;
	void setInitializationDataLoad(bool initializationDataLoad);
	std::string getDestinationEndpointInstanceType() const;
	void setDestinationEndpointInstanceType(const std::string &destinationEndpointInstanceType);

private:
	std::string sourceEndpointInstanceID_;
	std::string destinationEndpointInstanceID_;
	bool initializationStructureLoad_;
	std::string synchronizationObject_;
	std::string ownerId_;
	std::string sourceEndpointInstanceType_;
	std::string synchronizationJobId_;
	std::string synchronizationJobName_;
	bool initializationDataLoad_;
	std::string destinationEndpointInstanceType_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGURATIONSYNCHRONIZATIONJOBREQUEST_H_
