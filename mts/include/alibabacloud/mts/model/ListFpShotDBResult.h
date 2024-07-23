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

#ifndef ALIBABACLOUD_MTS_MODEL_LISTFPSHOTDBRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_LISTFPSHOTDBRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT ListFpShotDBResult : public ServiceResult
			{
			public:
				struct FpShotDB
				{
					std::string status;
					std::string description;
					std::string instanceId;
					int modelId;
					std::string fpDBId;
					std::string name;
				};


				ListFpShotDBResult();
				explicit ListFpShotDBResult(const std::string &payload);
				~ListFpShotDBResult();
				std::vector<FpShotDB> getFpShotDBList()const;
				std::vector<std::string> getNonExistIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FpShotDB> fpShotDBList_;
				std::vector<std::string> nonExistIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_LISTFPSHOTDBRESULT_H_