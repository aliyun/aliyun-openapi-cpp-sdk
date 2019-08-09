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

#ifndef ALIBABACLOUD_AEGIS_MODEL_QUERYCRACKEVENTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_QUERYCRACKEVENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT QueryCrackEventResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PageInfo
					{
						int totalCount;
						int pageSize;
						int currentPage;
						int count;
					};
					struct Entity
					{
						int status;
						std::string buyVersion;
						std::string userName;
						std::string instanceId;
						std::string ip;
						int attackType;
						std::string statusName;
						int groupId;
						std::string instanceName;
						int inWhite;
						std::string uuid;
						std::string attackTypeName;
						int crackTimes;
						std::string region;
						std::string crackSourceIp;
						std::string attackTime;
						std::string location;
					};
					PageInfo pageInfo;
					std::vector<Entity> list;
				};


				QueryCrackEventResult();
				explicit QueryCrackEventResult(const std::string &payload);
				~QueryCrackEventResult();
				std::string getRequestId()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestId_;
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_QUERYCRACKEVENTRESULT_H_