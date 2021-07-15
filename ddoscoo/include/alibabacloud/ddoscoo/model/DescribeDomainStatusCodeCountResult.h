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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSTATUSCODECOUNTRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSTATUSCODECOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeDomainStatusCodeCountResult : public ServiceResult
			{
			public:


				DescribeDomainStatusCodeCountResult();
				explicit DescribeDomainStatusCodeCountResult(const std::string &payload);
				~DescribeDomainStatusCodeCountResult();
				long getStatus5012()const;
				long getStatus5023()const;
				long getStatus5034()const;
				long getStatus5045()const;
				long getStatus501()const;
				long getStatus502()const;
				long getStatus403()const;
				long getStatus40310()const;
				long getStatus503()const;
				long getStatus404()const;
				long getStatus504()const;
				long getStatus405()const;
				long getStatus40411()const;
				long getStatus2XX()const;
				long getStatus200()const;
				long getStatus3XX()const;
				long getStatus4XX()const;
				long getStatus5XX()const;
				long getStatus3XX12()const;
				long getStatus4057()const;
				long getStatus2XX1()const;
				long getStatus4XX9()const;
				long getStatus5XX8()const;
				long getStatus2006()const;

			protected:
				void parse(const std::string &payload);
			private:
				long status5012_;
				long status5023_;
				long status5034_;
				long status5045_;
				long status501_;
				long status502_;
				long status403_;
				long status40310_;
				long status503_;
				long status404_;
				long status504_;
				long status405_;
				long status40411_;
				long status2XX_;
				long status200_;
				long status3XX_;
				long status4XX_;
				long status5XX_;
				long status3XX12_;
				long status4057_;
				long status2XX1_;
				long status4XX9_;
				long status5XX8_;
				long status2006_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEDOMAINSTATUSCODECOUNTRESULT_H_