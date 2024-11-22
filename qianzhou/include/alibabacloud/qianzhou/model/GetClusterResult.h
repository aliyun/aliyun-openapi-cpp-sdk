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

#ifndef ALIBABACLOUD_QIANZHOU_MODEL_GETCLUSTERRESULT_H_
#define ALIBABACLOUD_QIANZHOU_MODEL_GETCLUSTERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qianzhou/QianzhouExport.h>

namespace AlibabaCloud
{
	namespace Qianzhou
	{
		namespace Model
		{
			class ALIBABACLOUD_QIANZHOU_EXPORT GetClusterResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string clusterID;
					std::string state;
					std::string userID;
					std::string currentVersion;
					std::string securityGroupId;
					std::string regionID;
					std::string clusterType;
					std::string spec;
					std::string profile;
					std::string name;
				};


				GetClusterResult();
				explicit GetClusterResult(const std::string &payload);
				~GetClusterResult();
				std::string getRequestId()const;
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QIANZHOU_MODEL_GETCLUSTERRESULT_H_