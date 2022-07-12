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

#ifndef ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEDDOSCREDITRESULT_H_
#define ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEDDOSCREDITRESULT_H_

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
			class ALIBABACLOUD_ANTIDDOS_PUBLIC_EXPORT DescribeDdosCreditResult : public ServiceResult
			{
			public:
				struct DdosCredit
				{
					int score;
					std::string scoreLevel;
					int blackholeTime;
				};


				DescribeDdosCreditResult();
				explicit DescribeDdosCreditResult(const std::string &payload);
				~DescribeDdosCreditResult();
				DdosCredit getDdosCredit()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				DdosCredit ddosCredit_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ANTIDDOS_PUBLIC_MODEL_DESCRIBEDDOSCREDITRESULT_H_