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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTVSWITCHCIDRRESERVATIONSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_LISTVSWITCHCIDRRESERVATIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ListVSwitchCidrReservationsResult : public ServiceResult
			{
			public:
				struct VSwitchCidrReservation
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string vSwitchCidrReservationCidr;
					std::string vSwitchCidrReservationDescription;
					std::string ipVersion;
					int assignedCidrCount;
					std::string vSwitchId;
					std::string type;
					std::string vpcId;
					int availableCidrCount;
					std::string creationTime;
					std::string vSwitchCidrReservationId;
					std::string vSwitchCidrReservationName;
					std::vector<VSwitchCidrReservation::Tag> tags;
				};


				ListVSwitchCidrReservationsResult();
				explicit ListVSwitchCidrReservationsResult(const std::string &payload);
				~ListVSwitchCidrReservationsResult();
				long getTotalCount()const;
				std::vector<VSwitchCidrReservation> getVSwitchCidrReservations()const;
				std::string getNextToken()const;
				long getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<VSwitchCidrReservation> vSwitchCidrReservations_;
				std::string nextToken_;
				long maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTVSWITCHCIDRRESERVATIONSRESULT_H_