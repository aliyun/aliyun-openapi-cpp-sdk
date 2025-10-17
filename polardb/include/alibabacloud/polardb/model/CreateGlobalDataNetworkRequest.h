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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEGLOBALDATANETWORKREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEGLOBALDATANETWORKREQUEST_H_

#include <alibabacloud/polardb/PolardbExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Polardb {
namespace Model {
class ALIBABACLOUD_POLARDB_EXPORT CreateGlobalDataNetworkRequest : public RpcServiceRequest {
public:
	CreateGlobalDataNetworkRequest();
	~CreateGlobalDataNetworkRequest();
	std::string getDestinationType() const;
	void setDestinationType(const std::string &destinationType);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getFreezeSourceDuringSync() const;
	void setFreezeSourceDuringSync(const std::string &freezeSourceDuringSync);
	std::string getSourceId() const;
	void setSourceId(const std::string &sourceId);
	std::string getDestinationRegion() const;
	void setDestinationRegion(const std::string &destinationRegion);
	std::string getDestinationId() const;
	void setDestinationId(const std::string &destinationId);
	std::string getSourceFileSystemPath() const;
	void setSourceFileSystemPath(const std::string &sourceFileSystemPath);
	std::string getDestinationFileSystemPath() const;
	void setDestinationFileSystemPath(const std::string &destinationFileSystemPath);
	std::string getSourceRegion() const;
	void setSourceRegion(const std::string &sourceRegion);

private:
	std::string destinationType_;
	std::string description_;
	std::string sourceType_;
	std::string freezeSourceDuringSync_;
	std::string sourceId_;
	std::string destinationRegion_;
	std::string destinationId_;
	std::string sourceFileSystemPath_;
	std::string destinationFileSystemPath_;
	std::string sourceRegion_;
};
} // namespace Model
} // namespace Polardb
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEGLOBALDATANETWORKREQUEST_H_
