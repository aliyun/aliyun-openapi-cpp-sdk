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

#ifndef ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEDDOSCOUNTRESULT_H_
#define ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEDDOSCOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/antiddos-public/Antiddos_publicExport.h>

namespace AlibabaCloud
{
	namespace Antiddos_public
	{
		namespace Model
		{
			class ALIBABACLOUD_ANTIDDOS_PUBLIC_EXPORT DescribeDdosCountResult : public ServiceResult
			{
			public:
				struct DdosCount
				{
					int blackholeCount;
					int defenseCount;
					int instacenCount;
				};


				DescribeDdosCountResult();
				explicit DescribeDdosCountResult(const std::string &payload);
				~DescribeDdosCountResult();
				DdosCount getDdosCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				DdosCount ddosCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEDDOSCOUNTRESULT_H_