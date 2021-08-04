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

#ifndef ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCEENGINELISTRESULT_H_
#define ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCEENGINELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT GetLindormInstanceEngineListResult : public ServiceResult
			{
			public:
				struct EngineInfo
				{
					struct NetInfo
					{
						int port;
						std::string connectionString;
						std::string netType;
						int accessType;
					};
					std::vector<EngineInfo::NetInfo> netInfoList;
					std::string engineType;
				};


				GetLindormInstanceEngineListResult();
				explicit GetLindormInstanceEngineListResult(const std::string &payload);
				~GetLindormInstanceEngineListResult();
				std::vector<EngineInfo> getEngineList()const;
				std::string getInstanceId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EngineInfo> engineList_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_GETLINDORMINSTANCEENGINELISTRESULT_H_