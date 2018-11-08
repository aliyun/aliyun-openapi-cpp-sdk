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

#ifndef ALIBABACLOUD_CSB_MODEL_GETINSTANCERESULT_H_
#define ALIBABACLOUD_CSB_MODEL_GETINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csb/CSBExport.h>

namespace AlibabaCloud
{
	namespace CSB
	{
		namespace Model
		{
			class ALIBABACLOUD_CSB_EXPORT GetInstanceResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Instance
					{
						std::string sentinelCtlStr;
						int sentinelGridInterval;
						std::string description;
						std::string brokerVpcName;
						long gmtModified;
						bool testable;
						int clusterMembers;
						int statusCode;
						std::string name;
						std::string ownerId;
						std::string csbAccountId;
						int dbStatus;
						bool isPublic;
						long sentinelCtrl;
						bool visible;
						long credentialGroup;
						int instanceType;
						std::string status;
						long sentinelQps;
						std::string ipList;
						long csbId;
						std::string brokerVpcId;
						std::string clientVpcName;
						std::string frontStatus;
						int instanceCategory;
						long gmtCreate;
						bool isImported;
						std::string tenantId;
						std::string userId;
						int apprLevel;
						std::string clientVpcId;
						std::string vpcName;
						long id;
						std::string apprUser1;
						std::string apprUser2;
					};
					Instance instance;
				};


				GetInstanceResult();
				explicit GetInstanceResult(const std::string &payload);
				~GetInstanceResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSB_MODEL_GETINSTANCERESULT_H_